from openai import OpenAI

client=OpenAI()

response=client.responses.create(
    input="In one sentence, what is cs50?",
    model="gpt-5"
)

print(response.output_text)